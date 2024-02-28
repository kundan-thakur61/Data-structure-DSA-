/**
 * const promises=new Promise((resolve,reject)=>
{
let condition=true;
if(condition)
{
    resolve("this condition is true")
}
else{
    reject("this condition is flase")
}
});

promises
.then((msg)=>
{
console.log("true condition",msg);
console.log("haaaaaaa");
})
.catch((msg)=>
{
    console.log("flase concdition",msg);
    console.log("naaaaaaaaaaaa");
})
.finally("chalo bro life me maze karte hai");*/
/** 
const f1promise=new Promise((resolve,reject)=>{
    setTimeout(()=>{
if(Math.random() > 0.5) {
    resolve("Friend1: i am goinggoa ");
}
   else{
    reject("Friend1: urgent kaam aaa gaayaa hai");
   }
    },3000) 
})


const f2promise=new Promise((resolve,reject)=>{
    setTimeout(()=>{
if(Math.random()>0.5) {
    resolve("Friend2: i am goinggoa ");
}
   else{
    reject("Friend2: urgent kaam aaa gaayaa hai");
   }
    },2000) 
})


const f3promise=new Promise((resolve,reject)=>{
    setTimeout(()=>{
if(Math.random()>0.5) 
{
    resolve("Friend3: i am goinggoa ");
}
   else{
    reject("Friend3: urgent kaam aaa gaayaa hai");
   }
    },1000) 
})
Promise.all([f1promise,f2promise,f3promise]).then((msg)=>{
    console.log(msg);
    console.log("yahh we are going goa ");
})
.catch((msg)=>{
    console.log(msg);
    console.log("kya yaar tum bhi ");
})*/

const GF1=new Promise((resolve,reject)=>{
    setTimeout(()=>{
if(Math.random() > 0.5) {
    resolve("GF1: COME FOR DINNER");
}
   else{
    reject("GF1:FRIENDS ARE COMMING");
   }
    },1000) 
})


const GF2=new Promise((resolve,reject)=>{
    setTimeout(()=>{
if(Math.random()>0.5) {
    resolve("GF2: i am goinggoa ");
}
   else{
    reject("GF2: urgent kaam aaa gaayaa hai");
   }
    },1000) 
})


const GF3=new Promise((resolve,reject)=>{
    setTimeout(()=>{
if(Math.random()>0.5) 
{
    resolve("GF3: i am goinggoa ");
}
   else{
    reject("GF3: urgent kaam aaa gaayaa hai");
   }
    },1000) 
})
Promise.any([GF1,GF2,GF3]).then(result=>{
    console.log(result);
    console.log("my valentinens day starts");
})
.catch(msg=>{
    console.log(msg);
    console.log("i am from bajrang dal");
})