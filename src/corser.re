type opts;
external opts : origins::(array string)? =>
                supportsCredentials::Js.boolean? =>
                unit => opts = "" [@@bs.obj];
external express : opts => Express.Middleware.t = "create" [@@bs.module "corser"];