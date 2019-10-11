<?php
function get_page_content(&id);{
	if(file_exists(&id.'.html')
		include(&id.'html'); //dołącz kod pliku
	else
		include('404.html');
}
?>