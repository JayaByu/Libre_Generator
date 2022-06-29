## task name

Tone (Forensic, Baby, 10 pts)

## task description

Ha! Looks like this guy forgot to turn off his video stream and entered his password on his phone!

[youtu.be/11k0n7TOYeM](https://youtu.be/11k0n7TOYeM)

## solution

The task description leaves no room to questions - in the video you can clearly hear a guy typing something on his phone and making some keypress beeps in process. These beeps are the tones of [DTFM keypad signals](https://en.wikipedia.org/wiki/Dual-tone_multi-frequency_signaling) associated with different keys. Turns out that these beeps can be easily identified and decoded by matchin them to corresponding frequencies as it was first outlined in the [paper by Liu](https://blogs.unimelb.edu.au/sciencecommunication/2012/10/17/melody-behind-phone-numbers/) back in 2012.

To clearly see the spectrogram with the frequencies, we first need to get the audio from the video and convert it to a PCM (pulse-code modulation) signed 24 bits mono wav.

```
youtube-dl https://youtu.be/11k0n7TOYeM 

ffmpeg -i twitch_saved_video_clip_@thesecretguy98191_2019-07-20-11k0n7TOYeM.mp4 -vn -acodec pcm_s24le -ar 44100 -ac 1 output.wav
```

After getting the file ready, we can open it in Audacity, change the view mode to Spectrogram and modify the scale to 650 Hz being the minimum and 1700 Hz being the maximum frequency so we can better see the frequencies for each key press.

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/audacity_settings.png)

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/audacity.png)

It will look like this in Audacity. What you can do next is manually compare each key press with the table of frequencies in the paper by Liu, or you can choose the hacker way and try to set up something to categorize and identify the frequencies for you.

I chose the manual approach first and identified all the tones, which gave me a long string of numbers.

```
222999227774442227777777733222777338866666255533355524
```

I wanted to double-check the result and also get some new tools, so I tried using some of the tools available on Github, but could not achieve a consistent result.

What worked for me though was an iPhone app called DTMFdecode which identified the tones pretty well and gave me the opportunity to double-check what I parsed manually. You can see on the screenshot below that there is only a minor mistake in recognition for this app.

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/decoder_app.jpg)

By looking at the string of numbers you might have already realised that only the numbers from 2 to 9 are occuring, which points to the fact that these numbers represent letters you can see on your phone keypads, with for example A, B and C being under the 2 key.  

This means that 222 probably stands for C, or for example B and A and in general it is something called the Multi-tap Cipher (SMS Mode ABC). Looking for a decoder site, I was able to find one [here](https://www.dcode.fr/multitap-abc-cipher) and pasting the numbers gives us the following string.

```
CYBRICSSECREUONALFLAG
```

I tried bruteforcing more for other possible combinations after the properly guessed CYBRICS part.

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/decoder.png)

SECRETTONA here looks like what we were looking for, which makes the whole string the following:

```
CYBRICSSECRETTONALFLAG
```

And that gives us 10 points! Brilliant.
