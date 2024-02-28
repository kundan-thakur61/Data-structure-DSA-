// function hello()
// {
//     let name="kundan"
// console.log(name);
// }
// hello()

// console.log(name);

// function outerfn()
// {
//     let outerVar="i am from koderma"
//     function innerfn()
//     {
//         console.log(outerVar);
//     }
//     return innerfn
// }
// let fn=outerfn();
// fn()

function customer()
{
    let count=0
    return function()
    {
        count++
console.log("new customer count is "+count);
    }
}
let counter=customer()

counter()
counter()
counter()