// class Dog{
//     constructor(dogname,weight,color,bread)
//     {
//         this.dogname=dogname;
//         this.weight=weight;
//         this.color=color;
//         this.bread=bread;
//     }
// }
// let dog=new Dog("javascript","2.4","brown","chihu");
// console.log(dog.dogname,"is a",dog.bread,"and weight",dog.weight,"kg",dog.color);

/*........................................................................................ */
// class person{
//     constructor(firstName,lastname)
//     {
//         this.firstName=firstName;
//         this.lastname=lastname;
//         // this.person=person;
//     }
// }
// let p=new person("kundan","thakur");
// console.log("hi",p.firstName,p.lastname);

/*........................................................................................ */
// class person{
//     constructor(firstName,lastname="thakur")
//     {
//         this.firstName=firstName;
//         this.lastname=lastname;
//     }
// }
// let p=new person("kundan",);
// console.log("hi",p.firstName,p.lastname);
/*...............practice exercise 7.1............. */
// class person{
//     constructor(firstname,lastname)
//     {
//         this.firstname=firstname;
//         this.lastname=lastname;
//     }
// }
// let person1=new person("kundan","thakur");
// let person2=new person("sanjeev","yadav");
// console.log("hello"+person1.firstname);
// console.log("hello"+person2.firstname);

/*....................METHODS.................. */
// class person{
//     constructor(firstName,lastname)
//     {
//         this.firstName=firstName;
//         this.lastname=lastname;
//     }
//     great()
//     {
//         console.log("hii ","i am ",this.firstName,this.lastname);
//     }
// }
// let p=new person("kundan","thakur");
// p.great();

/*.............just like function,method can also take parameter and return results...... */
// class person{
//     constructor(firstname,lastName)
//     {
//         this.firstname=firstname;
//         this.lastName=lastName;
//     }
//     // greet()
//     // {
//     //     console.log("hii");
//     // }
//     compliment(name,object)
//     {
//         return "this is wonderful"+object+","+name;
//     }
// }
// let compliment=new person("kundan","robber");
// console.log(compliment);

/*...............practice exercise 7.2............. */
// class person{
//         constructor(firstname,lastName)
//         {
//             this.firstname=firstname;
//             this.lastName=lastName;
//         }
//         fullName(name ,object)
//         {
//             return name+object;
//         }
//     }
//     let fullName=new person("kundan","thakur");
//     console.log(fullName.firstname,fullName.lastName);


/*....................properties.................. */
// class person{
//     constructor(firstName,lastName)
//     {
//         this.firstName=firstName;
//         this.lastName=lastName;

//     }
// }
// let p=new person("kundan","thakur");
// console.log("hii",p.firstName)



/*because the firstname and lastname properties can not accessed rom outside the class.this is done by addding of properties*/

// class person{
//     #firstName;
//     #lastName;
//     construcror(firstName,lastName){
//         this.#firstName=firstName;
//         this.#lastName=lastName;
//     }
// }
// let p=new person("kundan","thakur");
// console.log(p.firstName);//undefined
 

/*because the firstname and lastname properties can not accessed rom outside the class.this is done by addding of properties*/
// class person{
//         #firstName;
//         #lastName;
//         construcror(firstName,lastName){
//             if(firstName.startsWith("k"))
//             {
//                 this.#firstName=firstName;
//             }
//             else
//             {
//                 this.#firstName="k"+firstName;
//             }
//             this.#lastName=lastName;
//         }
//     }
//     let p=new person("kundan","thakur");


/*....................Getters And Setters................ .. */
/*
class person{
        #firstName;
        #lastName;
        construcror(firstName,lastName){
            this.#firstName=firstName;
            this.#lastName=lastName;
        }
        get firstName()
        {
            return this.#firstName;
        }
        set firstName(firstName)
        {
           this.#firstName=firstName;
        }
        get lastName()
        {
            return this.#lastName;
        }
        set lastName(lastName)
        {
            this.#lastName=lastName;
        }
    }
let p=new person("kundan","thakur");
console.log(p.firstName);
*/
// class Person {
//     constructor(name) {
//       this._name = name;
//     }
  
//     get name() {
//       return this._name;
//     }
  
//     set name(newName) {
//       this._name = newName;
//     }
//   }
  
//   const person = new Person('John');
//   console.log(person.name); // Output: John
  
//   person.name = 'Doe';
//   console.log(person.name); // Output: Doe

  /*....................Inheritance................ .. */
  /*class vehicle{
    constructor(color,cureentspeed,maxspeed,weight)
    {
     this.color=color;
     this.cureentspeed=cureentspeed;
     this.maxspeed=maxspeed;
     this.weight=weight;   
    }
    move()
    {
        console.log("moving at",this.cureentspeed);
    }
    accelerate(amount)
    {
        this.cureentspeed+=amount;
    }
  }
  class motorcycle extends vehicle
  {
    constructor(color,cureentspeed,maxspeed,weight,fuel)
    {
        super(color,cureentspeed,maxspeed,weight);
        this.fuel=fuel;
    }
    dowheelie()
     {
console.log("driving on one wheel!");
     }
    
  }
  let motor=new motorcycle("black",0.0,300,250,"gasoline");
  console.log(motor.color);
  motor.accelerate(50);
  motor.move();*/
  /*....................PROTOTYPE................ .. */
  /*class person{
    constructor(firstname,lastname)
    {
        this.firstname=firstname;
        this.lastname=lastname;
    }
    greet()
    {
        console.log("hii there");
    }
  }
  person.prototype.introduce=function()
  {
console.log("hii","i'am",this.firstname);

  };
  person.prototype.favoritecolor="green";
  let p=new person("kundan","thakur");
  console.log(p.favoritecolor);
  p.introduce();*/

   /*....................exercice 7.3................ .. */
   /*class Animal
   {
    constructor(species,sounds)
    {
        this.species=species;
        this.sounds=sounds;
    }
    speek()
    {
        console.log(this.species+"  "+this.sounds);
    }
}
    Animal.prototype.eat=function()
    {
        return this.species+"is eating";
    }
   let cat=new Animal("cat","meow");
   let dog=new Animal("dog","bark");
   cat.speek();
   console.log(dog.eat());
   console.log(dog);*/
    /*....................project................ .. */
    //Emploee traciing app
    /*class employee{
        constructor(first,last,year)
        {
            this.first=first;
            this.last=last;
            this.year=year;
        }
    }
    const person1=new employee("kundan","thakur",21);
    const person2=new employee("raj","sharma",20);
    const workers=[person1,person2];
    employee.prototype.details  =function()
    {
        return this.first+" "+this.last+" has worked here "+this.year+" years";
    }
    workers.forEach((person)=>{
        console.log(person.details());

    });
    */
     /*....................MENU ITEM PRICE CALCULATOR................ .. */
/*
    class menu{
        #offer1=10;
        #offer2=20;
        constructor(val1,val2)
        {
            this.val1=val1;
            this.val2=val2;
        }
        calTotal()
        {
            return(this.val1*this.#offer1)+(this.val2*this.#offer2);
        }
        get total()
        {
            return this.calTotal();
        }
    }
    const val1=new menu(2,0);
    const val2=new menu(1,3);
    const val3=new menu(3,2);
    console.log(val1.total);
    console.log(val2.total);
    console.log(val3.total);*/