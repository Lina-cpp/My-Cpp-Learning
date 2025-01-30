#include <iostream>
#include <cctype>

    float add(float a, float b)
    {
        return a + b;
    }

    float sub(float a, float b)
    {
        return a - b;
    }

    float mul(float a, float b)
    {
        return a * b;
    }

    float divide(float a, float b)
    {
        return a / b;
    }

    void WriteResult(float result)
    {
        std::cout << "Result: " << result << "\n";
    }
int main()
{
    int choice, a, b;
    float result;

        
    while (true)
    {
        //Menu
        std::cout<<"What would you like to do? \n";
        std::cout<<"1. Add \n";
        std::cout<<"2. Subtract \n";
        std::cout<<"3. Multiply \n";
        std::cout<<"4. Divide \n";
        std::cout<<"5. Exit \n";
        
        std::cout<<"Enter your choice : ";
            std::cin>>choice;

        //check if choice is a number, if not clear and restart
        if (!std::cin>>choice)
        {
            system("cls");
            std::cout<<"That is not a valid choice\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }


        //if want to leave
        else if (choice == 5)
        {
            std::cout<<"Exiting \n";
            return 0;
        }
        
        
        //check if choice is in range, if not restart
        else if (choice < 1 || choice > 4)
        {
            system("cls");
            std::cout<<"Wrong choice \n";
            continue;
            
        }

        else break; //leave loop
        
    }

        
        std::cout<<"\n Enter a: ";
        std::cin>>a;
        std::cout<<"\n Enter b: ";
        std::cin>>b;
        
        switch(choice)
        {
        default:
            std::cout<<"Wrong choice \n";
            break;

        case 1:
            result = add(a,b);
            WriteResult(result);
            break;

        case 2:
            result = sub(a,b);
            WriteResult(result);
            break;

        case 3:
            result = mul(a,b);
            WriteResult(result);
            break;

        case 4:
            result = divide(a,b);
            WriteResult(result);
            break;
            
        }
        
    
        
    return 0;
}
