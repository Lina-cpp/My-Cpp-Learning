#include <iostream>

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

        if (choice < 1 || choice > 5)
        {
            std::cout<<"Wrong choice \n";
            continue;
            
        }
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

        case 5:
            std::cout<<"Exit \n";
            break;
        }
        
    
        
    return 0;
}
