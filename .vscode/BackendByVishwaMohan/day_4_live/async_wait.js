/**function getmsg()
{
    return "hlw dost"
}
console.log(getmsg());//hlw dost

*/
/** 
async function getmsg()
{
    return "hlw dost"
}
console.log(getmsg());
//Promise { 'hlw dost' }

*/

/** 
async function getmsg()
{
    return "hlw dost"
}
getmsg().then(result=>{console.log(result);})
// hlw dost
*/

// function getmsgAfterWait()
//     {
//         console.log("First Line");
//         setTimeout(()=>{
//             console.log("hlw dost");
//         },3000)
//         console.log("Last Line");
//     }

//     getmsgAfterWait()
/*****************async-await****************** */




console.log("hellow from begnning");
async function getmsgAfterWait()
    {
        console.log("First Line");
        let data=new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("hlw dost");
        },3000)
    })

    let result=await data
    console.log(result);
        console.log("Last Line");
    }

    getmsgAfterWait()
    console.log("hellow from end");