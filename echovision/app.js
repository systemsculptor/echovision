const app = Vue.createApp({
    data() {
      return {
        register: "register/register.html",
        login: "login/login.html",
        logo: "home/home.html",
        products: "products/products.html",
        solutions: "solutions/solutions.html",
        support: "support/support.html",
      }
    }
  });

  app.mount('#body');