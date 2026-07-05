for trys in range(1,4):
        password=1234
        print(password)
        passwordE=int(input("enter the password:"))
        if passwordE==password:
           print("""        MENU
                     1. To check your balance
                     2. To make a deposit
                     3. To withdraw money""")
           choice=int(input("Enter your choice:"))
           balance=10000000
           if choice==1:                    
                print("Your current balance is:",balance)
                break
           elif choice==2:
                deposit=int(input("Enter the money to deposit:"))
                balance+=deposit
                print("Your new balance is:",balance)
                break
           else:
                withdraw=int(input("Enter the amount to be withdrawn:"))
                if  withdraw<=balance:
                     print("Amount is withdrawn")
                     balance-=withdraw
                     print("Your new balance is:",balance)
                     break
                else:
                     print(" Dont have enough balance.")
                     break
        else:
                if trys==2 or trys==1 and password!=passwordE:
                     print(" Try again.")
                else:
                     change=int(input("To change the password please type one."))
                     if change==1:
                              updatepaswd=input("Enter the new password")
                              password=updatepaswd
                              print("Password is updated.")
                     else:
                              print("invalid choice")
    

