// const user={
//     name:"kundan",
//     age:22,
//     city:"koderma"
// }
// accessing the data
// console.log(user.name);
// console.log(user["name"]);

// // Adding new data
// user.country="BHarat"
// user["continent"]="Asia"
// console.log(user.name);
// console.log(user);

// delete the object and keys

// delete user.country
// console.log(user);
// delete user["name"]
// console.log(user);
console.log("\n\n\n");
let  person={
    name:"kundan",
    age:22,
    hobby:"bgmi",

    Address:{
        city:"koderma",
        state:"jharkhand",
        zip:825418
    }
}
// for(let key in person)
// {
//     console.log(key,"=>",person[key]);
// }

// console.log(Object.keys(person));
// console.log(Object.values(person));
// console.log(Object.entries(person));


// cloning an object  using assign
const new_person=Object.assign({},person);
console.log(new_person);
const new_person1=Object.assign({},person,{role:"learner"})
console.log(new_person);
