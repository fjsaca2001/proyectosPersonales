from gtts import gTTS


def textAvoz(achFile):
    text = open(achFile, "r")
    text.read()

    file = gTTS(text=text, lang="en")
    filename = "res.mp3"
    file.save(filename)


textAvoz("hola.txt")
