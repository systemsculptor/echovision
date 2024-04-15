const app = Vue.createApp({
    data() {
      return {
        register: "register/register.html",
        login: "login/login.html",
        logo: "home/home.html",
        products: "products/products.html",
        solutions: "solutions/solutions.html",
        support: "support/support.html",
        shoes: "shoes/shoes.html",
        arrival: "arrival/arrival.html"

        tos : " tos/tos.html",
        privacy : "privacy/privacy.html",
        blog : "blog/blog.html"
        
      }
    }
  });

app.mount('#body');