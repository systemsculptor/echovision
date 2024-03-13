import axios from "axios";


const axios = require('axios').default;


axios.get("https://api.stripe.com") 
    .then(function (response) {
    console.log(response);
    })
    .catch(function (error)) {
        console.log(error);



    
    }
}