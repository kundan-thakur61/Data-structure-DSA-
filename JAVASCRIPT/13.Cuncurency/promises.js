/*let promises=new Promise((resolve, reject) => {
    let x=20;
    if(x>20)
    {
    resolve(x);
    }
else
{
reject(";less than x ");
}
});
promises.then(
    function(value)
    {
        console.log("succcess",value);
    },
function(error)
{
   console.log("error",error);
}
);
*/
/*
const promise = new Promise((resolve, reject) => 
{
resolve("success");
})

.then(value=>
    {
        console.log(value);
        return "we";
    })
    .then(value=>{
        console.log(value);
        return "can";
    })
    .then(value=>
        {
        console.log(value);
        return "chain";
        })
        .then(value=>
            {
            console.log(value);
            return "promise";
        })
        .then(value=>
            {
                console.log(value);
            })

            .catch(value=>
                {
                    console.log(value);
                })*/

  const promise = new Promise((resolve, reject) => 
{
reject("oops!..");
})

.then(value=>
    {
        console.log(value);
        return "we";
    })
    .then(value=>{
        console.log(value);
        return "can";
    })
    .then(value=>
        {
        console.log(value);
        return "chain";
        })
        .then(value=>
            {
            console.log(value);
            return "promise";
        })
        .then(value=>
            {
                console.log(value);
            })

            .catch(value=>
                {
                    console.log(value);
                })