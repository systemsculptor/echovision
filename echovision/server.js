
const express = require('express');
const app = express();
const port = 469;

app.get('/', (req, res) => {
  res.send('Hello World!');
});

app.listen(port, () => {
  console.log(`Server is running at http://localhost:${port}`);
})


app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'index.html'));
});


app.get('/register', (req, res) => {
  res.sendFile(path.join(__dirname, 'register/register.html'));
});


app.get('/login', (req, res) => {
  res.sendFile(path.join(__dirname, 'login/login.html'));
});


app.get('/products', (req, res) => {
  res.sendFile(path.join(__dirname, 'products/products.html'));
});


app.get('/shoes', (req, res) => {
  res.sendFile(path.join(__dirname, 'shoes/shoes.html'));
});