const testAddon = require('./build/Release/testaddon.node');
console.log('addon',testAddon);
// console.log(testAddon.hello());
// console.log('add ', testAddon.add(5, 10));

// const classInstance = new testAddon.ClassExample(4.3);
// console.log('Testing class initial value : ',classInstance.getValue());
// console.log('After adding 3.3 : ',classInstance.add(3.3));

// const prevInstance = new testAddon.ClassExample(4.3);
// console.log('Initial value : ', prevInstance.getValue());
// console.log('After adding 3.3 : ', prevInstance.add(3.3));
// const newFromExisting = new testAddon.ClassExample(prevInstance);
// console.log('Testing class initial value for derived instance');
// console.log(newFromExisting.getValue());

let a = "c3M6Ly83NDE3NDE6aGszOmNoYWNoYTIwLWlldGYtcG9seTEzMDU6MTA4LjIzOC4xMDMuMjM3LjE5MS4xODAuMTI0Ljk0LjIyNi41Ni45OC44OmxqcWRhbHUxMy4u";
let b = "c3M6Ly83NDE3NDE6aGs0OmNoYWNoYTIwLWlldGYtcG9seTEzMDU6MTYzLjQuMTAzLjE0My4yMC4wLjMuOTIuMTE5LjE1Ny4xNy40NDpsanFkYWx1MTMuLg==";
let c = "c3M6Ly83NDE3NDE6aGszOmNoYWNoYTIwLWlldGYtcG9seTEzMDU6OTYuNzcuMTAzLjEzNi43OC44OC4xMjQuNzEuMjI2LjE5OS45OC4xNjA6bGpxZGFsdTEzLi4=";
let d = "c3M6Ly83NDE3NDE6aGsxOmNoYWNoYTIwLWlldGYtcG9seTEzMDU6MjMzLjIuMTAzLjE4Ny4xMTEuNTkuMy4xMDIuMTE5LjIxMS4xOC43NzpsanFkYWx1MTMuLg==";
let e = "c3M6Ly83NDE3NDE6a3IxOmNoYWNoYTIwLWlldGYtcG9seTEzMDU6MTI2LjE3LjE1Ni4xOTAuMTcwLjc1LjE5My4xOTEuMjM0Ljg1LjEzMS4xNTY6bGpxZGFsdTEzLi4=";

console.log("config: ", testAddon.decrypt(a));
console.log("config: ", testAddon.decrypt(b));
console.log("config: ", testAddon.decrypt(c));
console.log("config: ", testAddon.decrypt(d));
console.log("config: ", testAddon.decrypt(e));

module.exports = testAddon;