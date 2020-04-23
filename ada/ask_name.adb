with Ada.Text_IO;use Ada.Text_IO;
with HelloWorld;

procedure ask_name is
	name	:string(1..100);--a string of length in 1 to 100
	last	:natural;	--only contains natural integers
begin
	put("What is your name?" );
	get_line(name,last);

	for i in 1..10 loop
		HelloWorld;
		put_line(" there " & name(1..last));
		-- & = string concatenation
		-- name(1..last) = slicing the array
	end loop;--labelled control structure
end ask_name;
