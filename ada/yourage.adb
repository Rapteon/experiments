with Ada.Text_IO;
with Ada.Integer_Text_IO;

use Ada.Text_IO;
use Ada.Integer_Text_IO;

procedure YourAge is
	Age	:Integer range 0..120;
begin
	Put("Hello, how old are you? ");
	Get(Age);
	--the above linemay cause an exception if the value entered is above the range.
	
	if Age < 18 then
		Put_Line("Ha ! Hi kid.");
	elsif Age < 60 then
		Put_Line("Working hard?");
	else
	       	Put_Line("Take it easy.");
	end if;

exception
	when constraint_error =>
		Put_Line("Sorry. Only ages between 1 to 120 are allowed.");
end YourAge;
