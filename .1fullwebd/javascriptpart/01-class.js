
class Animal {
    constructor(name, legCount) {
      this.name = name
      this.legCount = legCount
      this.speak=speaks
    }
    static
    speak(){
      consolr.log("hi there "+this.speak)
    }
    describe() {
      return `${this.name} has ${this.legCount} legs`
    }
  
  } 
  //class code
  const dog={
  name:"doggie",
  legcount:2,
  speaks:"bhaw bhaw"
  
  };
  const cat={
    name:"cat",
    legcount:2,
    speaks:"meow",
  
  };
  function printstr(animal){
    console.log('animal'+ animal["name"]+""+animal["speaks"]);
  
  }
  printstr(dog);
  printstr(cat); 
  
  