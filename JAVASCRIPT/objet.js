// singleton:  jab construtor ke through 
// object banta hai hai wah singleton  hota hai   


//object literal

const mySym=Symbol("key1")


const jsuser={
    name:"kundan",
    "full name":"kundan thakur ",
    [mySym]:"mykey1",
    age:19,
    location:"koderma",
    email:"kund@gmail.com", 
    login:false,
    lastlogin:["monday","saturday"]  
}
//how to access object in js
// console.log(jsuser["name"])
// console.log(jsuser["age"])
// console.log(jsuser["location"])
// console.log(jsuser["email"])
// console.log(jsuser["login"])
// console.log(jsuser["lastlogin"])
// console.log( jsuser["full name"])
// console.log( jsuser[ mySym])
jsuser.email = "kundan@outlok.com"

Object.freeze(jsuser)
jsuser.email = "kundan@yahhoo.com"

console.log(jsuser);
jsuser.greeting=function()
{
    console.log("hello js uder");
}

console.log(jsuser.greeting());



// // console.log(jsuser[ "mySym"])//error:undefined
// console.log( jsuser[mySym])
// console.log( jsuser["full name"])
// //if any change 
// jsuser.email="rahul@gmail.com"
// object.freeze(jsuser)
// jsuser.email="kundanthakur.outlook.com"
// console.log(jsuser);
// jsuser,greeting=function(){
//     console.log("hello js user");
// }
// console.log(jsuser.geeting()); //undefined