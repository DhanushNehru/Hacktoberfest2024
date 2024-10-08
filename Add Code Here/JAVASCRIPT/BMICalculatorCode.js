let age = document.getElementById("age");
let height = document.getElementById("height");
let weight = document.getElementById("weight");
let male = document.getElementById("male");
let female = document.getElementById("female");
let form = document.getElementById("form");

document.getElementById("submit").addEventListener("click", validateForm);

document.getElementById("clear").addEventListener("click", resetForm);

function validateForm() 
{
    temp = checkValidations();
    if (temp) 
    {
        alert(temp);
        document.getElementById("submit").removeEventListener("click", countBmi);
    }
    else 
    {
        countBmi();
    }
}

function checkValidations() 
{
    temp = false;
    if (age.value === '' || height.value === '' || weight.value === '' || (male.checked === false && female.checked === false)) 
    {
        temp = 'Please fill in all of the fields! All Fields are required !';
    }
    else if (age.value <= 0 || height.value <= 0 || weight.value <= 0) 
    {
        temp = 'Fields can not have negative or zero values';
    }
    else if (age.value < 18) 
    {
        temp = 'You must be 18 years old or above';
    }
    return temp;
}

function clearResults() 
{
    const parent = document.getElementById('results');
    while (parent.firstChild) 
    {
        parent.firstChild.remove();
    }
}

function resetForm() 
{
    form.reset();
    clearResults();
}

function countBmi() 
{
    clearResults();
    let a = [age.value, height.value, weight.value];
    if (male.checked) 
    {
        a.push("male");
    }
    else if (female.checked) 
    {
        a.push("female");
    }
    
    let bmi = Number(a[2]) / (Number(a[1]) / 100 * Number(a[1]) / 100);
    let result = '';

    if (bmi < 18.5) 
    { 
        result = 'You are Underweight! In order to maintain a healthy BMI try to add more nutrient rich food in your diet';
    }
    else if (18.5 <= bmi && bmi <= 24.9) 
    {
        result = 'Congrats, You are Healthy! In order to maintain a healthy BMI, keep exercising and have balanced diet';
    }
    else if (25 <= bmi && bmi <= 29.9) 
    {
        result = 'You are Overweight! In order to maintain a healthy BMI, try eating less processed food and begin a healthy diet and exercise more';
    }
    else if (30 <= bmi && bmi <= 34.9) 
    {
        result = 'You are Obese! In order to maintain a healthy BMI, you should start having a balanced diet, avoid processed and junk food and execise more ';
    }
    else if (35 <= bmi) 
    {
        result = 'You are Extremely obese! This is extremely dangerous for your health, in order to maintain a healthy BMI, you should start having a balanced diet, avoid processed and junk food and execise more. Moverover seek support from a doctor';
    }

    let h1 = document.createElement("h1");
    let h2 = document.createElement("h2");

    let b = document.createTextNode(result);
    let c = document.createTextNode('BMI: ');
    let d = document.createTextNode(parseFloat(bmi.toString()).toFixed(2));

    h1.appendChild(b);
    h2.appendChild(c);
    h2.appendChild(d);

    document.getElementById('results').appendChild(h1);
    document.getElementById('results').appendChild(h2);
}