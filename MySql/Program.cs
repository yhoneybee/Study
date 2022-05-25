Console.WriteLine("Hello, World!");
MySql.Data.MySqlClient.MySqlConnection conn = new MySql.Data.MySqlClient.MySqlConnection("Server=119.196.245.41;Port=3306;Database=db;Uid=yhoney;Pwd=gjslb22;");
conn.Open();

MySql.Data.MySqlClient.MySqlCommand cmd = new MySql.Data.MySqlClient.MySqlCommand("INSERT INTO userinfo VALUES('123','123');",conn);
cmd.ExecuteNonQuery();