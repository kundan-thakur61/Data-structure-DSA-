function saysomething(x)
{
    return new Promise(resolve=>
        {
            setTimeout(()=>
            {
                resolve("something"+x)},2000);
            
        });
}
async function talk(x)
{
    const word=await saysomething(x);

    console.log(word);
}

talk(2);
talk(4);
talk(8);
