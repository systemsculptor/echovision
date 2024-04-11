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
      }
    }
  });

  app.mount('#body');