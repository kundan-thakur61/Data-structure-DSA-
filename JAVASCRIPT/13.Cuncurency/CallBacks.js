/*function doSomething(callback)
{
    callback();
}

function sayHii()
{
    console.log("hii");
}
doSomething(sayHii);
*/

/*function judge(grade)
{
    switch(true)
    {
        case grade=='A':
            console.log("you scores" ,grade,"!Amazing");
            break;
            case grade=='B':
                console.log("you got",grade,"great");
                break;
                case grade=='C':
                    console.log("you got",grade,"well");
                    break;
                    case grade=='D':
                        console.log("you got",grade,"hmm!");
                        break;
                        case grade=='E':
                            console.log("you got",grade,"Fail! do it ");
                            break;
                                        
    }
}
function getGrade(score,callback)
{
    let grade;
    switch(true)
    {
        case score>=90:
            grade="A";
            break;
            case score>=80:
                grade="B";
                break;
                case score>=70:
                    grade="C";
                    break;
                    case score>=60:
                        grade= "D";
                        default:
                            grade ="F";
    }
    callback(grade);
}
getGrade(90,judge);*/

// function greet(fullName){
//     console.log(`Welcome, ${fullName[0]} ${fullName[1]}`)
//    }

//    function processCall(user, callback){
//     const fullName = user.split(" ");
//     callback(fullName);
//    }
//    processCall("Laurence Svekis", greet);
function greet(fullname)
{
    console.log(`welcome,${fullname[0]} ${fullname[1]} ${fullname[2]} ${fullname[3]} ${fullname[4]}`);
}
function great1(user,callback)
{
    
   const  fullname=user.split(" ");
    callback(fullname);
}
great1("kundan thakur how are you!",greet);