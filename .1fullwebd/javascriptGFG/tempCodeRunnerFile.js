// 🔹 2. Searching in an Array of Objects
const users = [
  { name: "John Doe", age: 25 },
  { name: "Jane Smith", age: 30 },
  { name: "Johnny Appleseed", age: 20 },
];

const query = "john";

const result1=users.filter(user=>user.name.toLowerCase().includes(query.toLowerCase()));

// const results = users.filter(user =>
//   user.name.toLowerCase().includes(query.toLowerCase())
// );

console.log(result1);
// Output: [{ name: "John Doe", ... }, { name: "Johnny Appleseed", ... }]