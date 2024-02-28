// let val=0;
// function outputTime(x)
// {
//     return new Promise(resolve=>
//         {
//             setTimeout(()=>
//             {
//                 val++;
//     console.log(`ready ${x} counter:$(val)`);},1000);
            
//         });
// }
// async function aCall(x)
// {
// console.log(`ready ${x} counter:$(val)`);
// const res=await outputTime(x);
// console.log(res);
// }
// for(let i=1;i<4;i++)
// {
//     aCall(i);
// }

let cnt = 0;
 function outputTime(val) {
 return new Promise(resolve => {
 setTimeout(() => {
 cnt++;
 resolve(`x value ${val} counter:${cnt}`);
 }, 1000);
 });
 }
 async function aCall(val) {
 console.log(`ready ${val} counter:${cnt}`);
 const res = await outputTime(val);
 console.log(res);
 }
 for (let x = 1; x < 4; x++) {
 aCall(x);
 }
