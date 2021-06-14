from translate import Translator

translator = Translator(to_lang="ja")

try:
    with open("demo.txt") as my_file1:
        text = my_file1.read()
        translation = translator.translate(text)
        with open("demo-ja.txt", mode="w",encoding="utf-8") as my_file2:
            my_file2.write(translation)

except FileNotFoundError as e:
    print("Please check the file path..")

