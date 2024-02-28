const allowed = ["1234", "pass", "apple"];
function passwordChecker(pass) {
 return allowed.includes(pass);
}
function login(password) {
 return new Promise((resolve, reject) => {
 if (passwordChecker(password)) {
 resolve({
 status: true
 });
 } else {
 reject({
 status: false
 });
 }
});
}
function checker(pass) {
 login(pass)
 .then(token => {
 console.log("succsessfully loged in:");
 console.log(token);
 })
 .catch(value => {
 console.log("wrong password:");
 console.log(value);
 })
}
checker("7050818061");
checker("wrong");

/*
const allowed=["12345678","kundan@123","apple"];
function passwordChecker(pass)
{
    return allowed.includes(pass);
}
function login(password)
{
    return new Promise((resolve,reject)=>
    {
if(passwordChecker(password))
{
    resolve({
    
        status:true
    });
}
else{
    reject({
        status:false
    });
}
    });
}

function checker()
{
   login(pass)

   .then(token=>
   {

   console.log("succfully loged in:");
console.log(token);
   });

//    .catch(value=>
//     {
// console.log("wrong passwoed:");
// console.log(value);
//     })
(value => {
    console.log("Reject:");
    console.log(value);
    })
}
checker("1234");
checker("wrong")*/