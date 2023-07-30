/* Auto generated file: with makeref.py .  Docs go in docs/reST/ref/ . */
#define DOC_MIXER "pygame module for loading and playing sounds"
#define DOC_MIXER_INIT "init(frequency=44100, size=-16, channels=2, buffer=512, devicename=None, allowedchanges=AUDIO_ALLOW_FREQUENCY_CHANGE | AUDIO_ALLOW_CHANNELS_CHANGE) -> None\ninitialize the mixer module"
#define DOC_MIXER_PREINIT "pre_init(frequency=44100, size=-16, channels=2, buffer=512, devicename=None, allowedchanges=AUDIO_ALLOW_FREQUENCY_CHANGE | AUDIO_ALLOW_CHANNELS_CHANGE) -> None\npreset the mixer init arguments"
#define DOC_MIXER_QUIT "quit() -> None\nuninitialize the mixer"
#define DOC_MIXER_GETINIT "get_init() -> (frequency, format, channels)\ntest if the mixer is initialized"
#define DOC_MIXER_STOP "stop() -> None\nstop playback of all sound channels"
#define DOC_MIXER_PAUSE "pause() -> None\ntemporarily stop playback of all sound channels"
#define DOC_MIXER_UNPAUSE "unpause() -> None\nresume paused playback of sound channels"
#define DOC_MIXER_FADEOUT "fadeout(time) -> None\nfade out the volume on all sounds before stopping"
#define DOC_MIXER_SETNUMCHANNELS "set_num_channels(count) -> None\nset the total number of playback channels"
#define DOC_MIXER_GETNUMCHANNELS "get_num_channels() -> count\nget the total number of playback channels"
#define DOC_MIXER_SETRESERVED "set_reserved(count) -> count\nreserve channels from being automatically used"
#define DOC_MIXER_FINDCHANNEL "find_channel(force=False) -> Channel\nfind an unused channel"
#define DOC_MIXER_SETSOUNDFONT "set_soundfont(path) -> None\nset the soundfont for playing midi music"
#define DOC_MIXER_GETSOUNDFONT "get_soundfont() -> paths\nget the soundfont for playing midi music"
#define DOC_MIXER_GETBUSY "get_busy() -> bool\ntest if any sound is being mixed"
#define DOC_MIXER_GETSDLMIXERVERSION "get_sdl_mixer_version() -> (major, minor, patch)\nget_sdl_mixer_version(linked=True) -> (major, minor, patch)\nget the mixer's SDL version"
#define DOC_MIXER_SOUND "Sound(filename) -> Sound\nSound(file=filename) -> Sound\nSound(file=pathlib_path) -> Sound\nSound(buffer) -> Sound\nSound(buffer=buffer) -> Sound\nSound(object) -> Sound\nSound(file=object) -> Sound\nSound(array=object) -> Sound\nCreate a new Sound object from a file or buffer object"
#define DOC_MIXER_SOUND_PLAY "play(loops=0, maxtime=0, fade_ms=0) -> Channel\nbegin sound playback"
#define DOC_MIXER_SOUND_STOP "stop() -> None\nstop sound playback"
#define DOC_MIXER_SOUND_FADEOUT "fadeout(time) -> None\nstop sound playback after fading out"
#define DOC_MIXER_SOUND_SETVOLUME "set_volume(value) -> None\nset the playback volume for this Sound"
#define DOC_MIXER_SOUND_GETVOLUME "get_volume() -> value\nget the playback volume"
#define DOC_MIXER_SOUND_GETNUMCHANNELS "get_num_channels() -> count\ncount how many times this Sound is playing"
#define DOC_MIXER_SOUND_GETLENGTH "get_length() -> seconds\nget the length of the Sound"
#define DOC_MIXER_SOUND_GETRAW "get_raw() -> bytes\nreturn a bytestring copy of the Sound samples."
#define DOC_MIXER_CHANNEL "Channel(id) -> Channel\nCreate a Channel object for controlling playback"
#define DOC_MIXER_CHANNEL_PLAY "play(Sound, loops=0, maxtime=0, fade_ms=0) -> None\nplay a Sound on a specific Channel"
#define DOC_MIXER_CHANNEL_STOP "stop() -> None\nstop playback on a Channel"
#define DOC_MIXER_CHANNEL_PAUSE "pause() -> None\ntemporarily stop playback of a channel"
#define DOC_MIXER_CHANNEL_UNPAUSE "unpause() -> None\nresume pause playback of a channel"
#define DOC_MIXER_CHANNEL_FADEOUT "fadeout(time) -> None\nstop playback after fading channel out"
#define DOC_MIXER_CHANNEL_SETSOURCELOCATION "set_source_location(angle,distance) -> None\nset the position of a playing channel"
#define DOC_MIXER_CHANNEL_SETVOLUME "set_volume(value) -> None\nset_volume(left, right) -> None\nset the volume of a playing channel"
#define DOC_MIXER_CHANNEL_GETVOLUME "get_volume() -> value\nget the volume of the playing channel"
#define DOC_MIXER_CHANNEL_GETBUSY "get_busy() -> bool\ncheck if the channel is active"
#define DOC_MIXER_CHANNEL_GETSOUND "get_sound() -> Sound\nget the currently playing Sound"
#define DOC_MIXER_CHANNEL_QUEUE "queue(Sound) -> None\nqueue a Sound object to follow the current"
#define DOC_MIXER_CHANNEL_GETQUEUE "get_queue() -> Sound\nreturn any Sound that is queued"
#define DOC_MIXER_CHANNEL_SETENDEVENT "set_endevent() -> None\nset_endevent(type) -> None\nhave the channel send an event when playback stops"
#define DOC_MIXER_CHANNEL_GETENDEVENT "get_endevent() -> type\nget the event a channel sends when playback stops"
