/*TOPIC:
1. if and if-else statements
2.else-if statement
3.conditional ternary operator
switch statement*/




/* ******if-else statements*****/
// syntax:
/*Ques.no:1:-
let rain=false;

if(rain)
{
console.log("hii kundan ");
}
else{
console.log("hii thakur");
}*/


// Ques.no:2:-
/*
let age=2;
if(age<18)
{
    console.log("   SOORY ,YOU ARE NOT ALLOWED");
}
else{
    console.log("WELCOME");
}*/
// QUES NO.3
/*
let age="eighteen";
if(age="nineteen")//wrong output because we not use == operator
{
    console.log("   eighteen");
}
else{
    console.log("nine_teen");
}*/




/* ******else-if statements*****/
/*
let age=70;
let cost=0;
let message;

 

if(age<3){
    cost=0;
    message="ACESS IS FREE UNDER THREE";

}
else if(age>=3&&age<12)
{
    cost=5;
    message="with the child discount,the fee is 5 dollars";
}
else if(age>=12 && age<65)
    {
        cost=10;
        message="A REGULAR TICKET COSTS 10 DOLLARS";
    }
else{
    cost=7;
    message="A  TICKET is 7 DOLLARS";
}
console.log(message);
console.log("your total cost",cost);
        // or
     console.log("your total cost"+cost);*/

// QUES2.
/*
let activity=["DRIVE HOME","breakfast"];

if(activity[1]=="get up"){
    console.log("it is 6:00AM");
}
else if(activity[1]==="breakfast"){
    console.log("it is 7:00AM");

}
else if(activity[2]==="DRIVE TO WORK"){
    console.log("it is 11:00AM");

}else if(activity[3]==="LUNCH"){
    console.log("it is 2:00PM");

}else if(activity[3]==="DRIVE HOME"){
    console.log("it is 6:00PM");

}else if(activity[4]==="DINNER"){
    console.log("it is 9:00PM");

}
else{
    console.log("result are not found..");
}
*/


/* ******conditiional ternary operator*****
let age=17;

let result=(age>=18)?console.log("welcome"):console.log("sorry")*/




/* ******conditiional ternary operator******/

let activity="get-Breakfast";

switch(activity)
{
    case "get-up":
        console.log("it is 6:00 AM");
        break;
        case "get-Breakfast":
        console.log("it is 7:00 AM");
        break;
        case "drive to work":
        console.log("it is 9:00 AM");
        break;
        case "lunch":
        console.log("it is 12:00 pM");
        break;
        case "drive home":
        console.log("it is 4:00 pM");
        break;
        case "dinner":
        console.log("it is 9:00 pM");
        break;
        case "sleep":
        console.log("it is 12:00 pM");
 
        break;
        default:
            console.log("it is 6:00 AM");
            break;
}

/*
let store="d";
switch(store)
{
    case 'a':
        console.log("it is 6:00 AM");
        break;

        case 'b':
        console.log("it is 7:00 AM");
       break;

        case 'c':
        console.log("it is 9:00 AM");
       break;

        case 'd':
        console.log("it is 12:00 pMhnb  ");
       break;

        case 'e':
        console.log("it is 4:00 pM");
        break;
        case 'f':
        console.log("it is 9:00 pM");
        break;
        case 'g':
        console.log("it is 12:00 pM");
        break;
        default:
            console.log("it is 6:00 AM");
            break;
}
*/