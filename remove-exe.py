import os

for file in os.listdir(os.getcwd()):
    if file.split(".")[1] == "exe":
        os.remove(file)