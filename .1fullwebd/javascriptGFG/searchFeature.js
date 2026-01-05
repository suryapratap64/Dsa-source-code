// 🔹 1. Searching in an Array (Basic Example)
const fruits = ["apple", "banana", "grapes", "mango", "orange"];

// filter() loops through the array.
// includes() checks if the search text exists in the string.
// toLowerCase() makes it case-insensitive.
const search = "ap"; // user typed this
const result = fruits.filter((fruit) =>
  fruit.toLowerCase().includes(search.toLowerCase())
);

console.log(result); // ["apple", "grapes"]

// 🔹 2. Searching in an Array of Objects
const users = [
  { name: "John Doe", age: 25 },
  { name: "Jane Smith", age: 30 },
  { name: "Johnny Appleseed", age: 20 },
];

const query = "john";

const result1 = users.filter((user) =>
  user.name.toLowerCase().includes(query.toLowerCase())
);

// const results = users.filter(user =>
//   user.name.toLowerCase().includes(query.toLowerCase())
// );

console.log(result1);
// Output: [{ name: "John Doe", ... }, { name: "Johnny Appleseed", ... }]

// 🔹 3. Searching in HTML Elements (Live Search)
{
  /* <input type="text" id="searchBox" placeholder="Search fruits..." />
<ul id="fruitList">
  <li>Apple</li>
  <li>Banana</li>
  <li>Grapes</li>
  <li>Mango</li>
  <li>Orange</li>
</ul>

<script>
  const searchBox = document.getElementById("searchBox");
  const fruits = document.querySelectorAll("#fruitList li");

  searchBox.addEventListener("input", function () {
    const searchText = this.value.toLowerCase();
    fruits.forEach(fruit => {
      fruit.style.display = fruit.textContent.toLowerCase().includes(searchText)
        ? ""
        : "none";
    });
  });
</script> */
}

//🔹 4. Searching with Backend (Optional)
async function searchUser(query) {
  const res = await fetch(`/api/users?search=${query}`);
  const data = await res.json();
  console.log(data);
}

searchUser("john");

//🔍 Example Using Regex for Smart Search
const words = ["Hello World", "Help", "Helium", "Hero"];
const query1 = "he";

const regex = new RegExp(query1, "i"); // "i" = case-insensitive
const results = words.filter((word) => regex.test(word));

console.log(results); // ["Hello World", "Help", "Helium", "Hero"]
