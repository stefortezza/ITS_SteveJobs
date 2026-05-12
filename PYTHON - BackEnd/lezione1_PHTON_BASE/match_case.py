command = input("Inserisci un comando ")

match command:
    case "start":
        print("start")
    case "stop":
        print("stop")
    case "help":
        print("help")
    case _:
        print("Invalid Choise")