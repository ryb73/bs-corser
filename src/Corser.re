type opts;
[@bs.obj]
external opts : (~origins : array(string)=?) =>
                (~supportsCredentials : bool=?) =>
                unit => opts = "";
[@bs.module "corser"] external express : opts => Express.Middleware.t = "create";