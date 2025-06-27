let salarys = Number(prompt("Enter your monthly salary:"));
let rents = Number(prompt("Enter your monthly rent:"));
let fuell = Number(prompt("Enter your monthly fuel expense:"));
let others = Number(prompt("Enter other monthly expenses:"));
let extras= Number(prompt("Enter any extra income:"));

let totalExpenses = rents + fuell + others;
let netSalary = salarys - totalExpenses+ extras;


 function calculateSalary() {
document.getElementById('salarys').innerText = `Trishu's salary is ${salarys}`;
document.getElementById('rents').innerText =`Trishu's rent Expense is ${rents}` ;
document.getElementById('fuell').innerText = `Trishu's fuell Expense is ${fuell}` ;
document.getElementById('others').innerText = `Trishu's other Expense is ${others}` ;
document.getElementById('extras').innerText = ` Trishu's extra Income is ${extras}`;
document.getElementById('netSalary').innerText = `Trishu's net salary is ${netSalary}`;

 }
  calculateSalary()









