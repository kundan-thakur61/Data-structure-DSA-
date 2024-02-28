const promise=new Promise((resovle,reject)=>
{
    resovle("start counting");
})
function counter(val)
{
    console.log(val);
}
promise
.then(value=>
    {
        counter(value);
return "one";
    })
    .then(value=>
        {
            counter(value);
    return "two";
        })
        .then(value=>
            {
                counter(value);
        return "three";
            })
            .then(value=>
                {
                    counter(value);
            return "four";
                })
                .then(value=>
                    {
                        counter(value);
                return "five";
                    })
/*
.then(value=>
    {
        console.log(value);
        return "one";
    })
    .then(value=>
        {
            console.log(value);
            return "two";
        })
        .then(value=>
            {
                console.log(value);
                return "three";
            })
            .then(value=>
                {
                    console.log(value);
                    return "four";
                })
                .then(value=>
                    {
                        console.log(value);
                        return "five";
                    })
                    .then(value=>
                        {
                            console.log(value);
                           
                        })
                        .catch(value=>
                            {
                            console.log(value);
                            })*/