// Name: Aditya Sinha 
// PRN: 24070123006
// Branch: EnTC A1

#include <iostream>
#define MAXSIZE 5

class Stack{
    private:
    int arr[MAXSIZE];
    int top;    
    public:   
    Stack(void):top(-1){}
    void push(int data){
        if(top < MAXSIZE - 1){
            top++;
        arr[top]=data;

        }
        else{
            std::cout<<"Stack Overflow"<<std::endl;
        }
    }
    void pop(void){
        if(top >= 0){
            top--;
        }
        else{
            std::cout<<"Stack Underflow"<<std::endl;
        }
    }
    void display(){
        for(int i=0;i<=top;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
    
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            std::cout<<"Stack is empty"<<std::endl;
            return -1; // Error value
        }
    }
    
    int popAndReturn(){
        if(top >= 0){
            int value = arr[top];
            top--;
            return value;
        }
        else{
            std::cout<<"Stack Underflow"<<std::endl;
            return -1; // Error value
        }
    }
};

int main(void){ // adding void is standard practice in C++
    Stack s;
    
    // Evaluating ((1+2)*3) using stack operations with actual calculations
    std::cout << "Evaluating expression: ((1+2)*3)" << std::endl;
    
    // Step 1: Push operands for inner expression (1+2)
    s.push(1);
    s.push(2);
    std::cout << "Pushed 1 and 2 for addition: ";
    s.display();
    
    // Step 2: Pop operands, perform addition, push result
    int operand2 = s.popAndReturn(); // pop 2
    int operand1 = s.popAndReturn(); // pop 1
    int additionResult = operand1 + operand2; // calculate 1+2
    s.push(additionResult); // push result
    std::cout << "Popped " << operand1 << " and " << operand2 << ", calculated " << operand1 << "+" << operand2 << "=" << additionResult << std::endl;
    std::cout << "After computing addition, pushed result: ";
    s.display();
    
    // Step 3: Push second operand for multiplication
    s.push(3);
    std::cout << "Pushed 3 for multiplication: ";
    s.display();
    
    // Step 4: Pop operands, perform multiplication, push final result
    int multiplier = s.popAndReturn(); // pop second operand (3)
    int multiplicand = s.popAndReturn(); // pop first operand (result of 1+2)
    int finalResult = multiplicand * multiplier; // calculate result * 3
    s.push(finalResult); // push final result
    std::cout << "Popped " << multiplicand << " and " << multiplier << ", calculated " << multiplicand << "*" << multiplier << "=" << finalResult << std::endl;
    std::cout << "Final result of ((1+2)*3): ";
    s.display();
    
    return 0;
}