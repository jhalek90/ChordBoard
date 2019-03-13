#include <Keyboard.h>

String key1 = "";
String key2 = "";
String key3 = "";
String key4 = "";
String key5 = "";
String key6 = "";
String input = "";

String letter = "";

String output = "";
bool held = false;

bool held1 = false;
bool held2 = false;
bool held3 = false;
bool held4 = false;
bool held5 = false;
bool held6 = false;

String split = " = ";


void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
Serial.begin(9600);
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
}

void release_keys(){
  if (held==false){

    
    //if (input==""){letter = ""; Keyboard.press('');}
    letter = "";
    if (input=="011111"){letter = "enter"; Keyboard.press(176);}//1
    if (input=="101111"){letter = "up"; Keyboard.press(218);}//2 UP
    if (input=="001111"){letter = "tab"; Keyboard.press(179);}//3 tab
    if (input=="110111"){letter = "backspace"; Keyboard.press(178);}//4
    if (input=="010111"){letter = "space"; Keyboard.press(32);}//5
    if (input=="100111"){letter = "escape"; Keyboard.press(177);}//6 escape
    if (input=="000111"){letter = "capslock"; Keyboard.press(193);}//7
    if (input=="111011"){letter = "left"; Keyboard.press(216);}//8 left
    if (input=="011011"){letter = "delete"; Keyboard.press(212);}//9 delete
    if (input=="101011"){letter = "/"; Keyboard.press('/');}//10
    if (input=="001011"){letter = "{"; Keyboard.press('{');}//11
    if (input=="110011"){letter = "+"; Keyboard.press('+');}//12
    if (input=="010011"){letter = "-"; Keyboard.press('-');}//13
    if (input=="100011"){letter = "<"; Keyboard.press('<');}//14
    if (input=="000011"){letter = ">"; Keyboard.press('>');}//15
    if (input=="111101"){letter = "down"; Keyboard.press(217);}//16 down
    if (input=="011101"){letter = "slash"; Keyboard.press(" '\' ");}//17
    if (input=="101101"){letter = ":"; Keyboard.press(':');}//18
    if (input=="001101"){letter = "}"; Keyboard.press('}');}//19
    if (input=="110101"){letter = "0"; Keyboard.press('0');}//20
    if (input=="010101"){letter = "1"; Keyboard.press('1');}//21
    if (input=="100101"){letter = "2"; Keyboard.press('2');}//22
    if (input=="000101"){letter = "3"; Keyboard.press('3');}//23
    if (input=="111001"){letter = "4"; Keyboard.press('4');}//24
    if (input=="011001"){letter = "5"; Keyboard.press('5');}//25
    if (input=="101001"){letter = "6"; Keyboard.press('6');}//26
    if (input=="001001"){letter = "7"; Keyboard.press('7');}//27
    if (input=="110001"){letter = "8"; Keyboard.press('8');}//28
    if (input=="010001"){letter = "9"; Keyboard.press('9');}//29
    //30
    //31
    if (input=="111110"){letter = "right"; Keyboard.press(215);}//32 right
    if (input=="011110"){letter = "A"; Keyboard.press('a');}//33
    if (input=="101110"){letter = "B"; Keyboard.press('b');}
    if (input=="001110"){letter = "C"; Keyboard.press('c');}
    if (input=="110110"){letter = "D"; Keyboard.press('d');}
    if (input=="010110"){letter = "E"; Keyboard.press('e');}
    if (input=="100110"){letter = "F"; Keyboard.press('f');}
    if (input=="000110"){letter = "G"; Keyboard.press('g');}
    if (input=="111010"){letter = "H"; Keyboard.press('h');}
    if (input=="011010"){letter = "I"; Keyboard.press('i');}
    if (input=="101010"){letter = "J"; Keyboard.press('j');}
    if (input=="001010"){letter = "K"; Keyboard.press('k');}
    if (input=="110010"){letter = "L"; Keyboard.press('l');}
    if (input=="010010"){letter = "M"; Keyboard.press('m');}
    if (input=="100010"){letter = "N"; Keyboard.press('n');}
    if (input=="000010"){letter = "O"; Keyboard.press('o');}
    if (input=="111100"){letter = "P"; Keyboard.press('p');}
    if (input=="011100"){letter = "Q"; Keyboard.press('q');}
    if (input=="101100"){letter = "R"; Keyboard.press('r');}
    if (input=="001100"){letter = "S"; Keyboard.press('s');}
    if (input=="110100"){letter = "T"; Keyboard.press('t');}
    if (input=="010100"){letter = "U"; Keyboard.press('u');}
    if (input=="100100"){letter = "V"; Keyboard.press('v');}
    if (input=="000100"){letter = "W"; Keyboard.press('w');}
    if (input=="111000"){letter = "X"; Keyboard.press('x');}
    if (input=="011000"){letter = "Y"; Keyboard.press('y');}
    if (input=="101000"){letter = "Z"; Keyboard.press('z');}//58

    if (input=="001000"){letter = "!"; Keyboard.press('!');}//59
   // if (input=="110000"){letter = "copy"; Keyboard.press('');}//60 //////////////copy
    if (input=="010000"){letter = "?"; Keyboard.press('?');}//61
//    if (input=="100000"){letter = "paste"; Keyboard.press('');}//62 /////////////////paste
    if (input=="000000"){letter = "."; Keyboard.press('.');}//63


    //y
    //Z
    Serial.println("CHARACTER: "  + input +" = "+letter);
    held=true;
    
    delay(10);
    Keyboard.releaseAll();
    }

  } 

void loop() {
  // put your main code here, to run repeatedly:

key1 = String(digitalRead(2));
key2 = String(digitalRead(3));
key3 = String(digitalRead(4));
key4 = String(digitalRead(5));
key5 = String(digitalRead(6));
key6 = String(digitalRead(7));





if (key1 == "0"){ 
    held1=true;
  }else{
    if (held1 == true){
      held1=false;
      release_keys();
      }
    }

if (key2 == "0"){ 
    held2=true;
  }else{
    if (held2 == true){
      held2=false;
      release_keys();
      }
    }

if (key3 == "0"){ 
    held3=true;
  }else{
    if (held3 == true){
      held3=false;
      release_keys();
      }
    }

if (key4 == "0"){ 
    held4=true;
  }else{
    if (held4 == true){
      held4=false;
      release_keys();
      }
    }

if (key5 == "0"){ 
    held5=true;
  }else{
    if (held5 == true){
      held5=false;
      release_keys();
      }
    }

if (key6 == "0"){ 
    held6=true;
  }else{
    if (held6 == true){
      held6=false;
      release_keys();
      }
    }


input = "";
input = input + key1 + key2 + key3 + key4 + key5 + key6;

if (input=="111111"){
  held=false;
  }

 

//Serial.println(input);
  } 


