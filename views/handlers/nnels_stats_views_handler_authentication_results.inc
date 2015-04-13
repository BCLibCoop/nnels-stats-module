<?php

 /**
 * @file
 * Handles login enumerations
 */
class nnels_stats_views_handler_authentication_results extends views_handler_field {
 function render($values) {
 	 $me = (integer)$values->nnels_stats_authen_result;
 	 $arr = array( 
 	 	0 => t('no login attempt'), 
 	 	1 => t('successful login'), 
 	 	2 => t("can't connect to remote service"), 
 	 	3 => t("can't find account"), 
 	 	4 => t('invalid password'),
 	 	5 => t('not allowed in patron class'),
 	 	6 => t('blocked patron'),
 	 	88 => t('already logged in'),
 	 	
 	 );
   /*
   module_invoke_all('calsauthen_login_result', 1, NULL, $org_id); // Successful login
module_invoke_all('calsauthen_login_result', 2, NULL, $org_id); // Can't connect to remote service
module_invoke_all('calsauthen_login_result', 3, NULL, $org_id); // Can't find account
module_invoke_all('calsauthen_login_result', 4, NULL, $org_id); // Invalid password
module_invoke_all('calsauthen_login_result', 5, NULL, $org_id); // Not in allowed patron class
module_invoke_all('calsauthen_login_result', 6, NULL, $org_id); // Blocked patron, for whatever reason
   
   
   */ 	 
 	 
 	 
 	 if (array_key_exists($me, $arr)) return $arr[$me] . " ($me)";  
	 
   return "ENUMERATION COMING SOON for " . $me;
  }
  function option_definition() {
    $options = parent::option_definition();
    //define our custom settings fields
    $options['enumerations'] = array();
    $options['marks_obtained'] = array();
    return $options;
  }
 
}