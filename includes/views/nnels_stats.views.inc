<?php

/**
 * Implements hook_views_data().
 */
function nnels_stats_views_data() {
 
    $data = array();
 
    $data['nnels_stats']['table']['group'] = t('NNELS STATS');
 
    $data['nnels_stats']['table']['base'] = array(
        'title' => t('NNELS Stats'),
        'help' => t('Contains records we want exposed to Views.'),
    );
 
		$data['nnels_stats']['table']['join'] = array(
		    'node' => array(
		        'left_field' => 'nid',
		        'field' => 'orgid',
		    ),
		);		 


		// The ID field
		$data['nnels_stats']['visitid'] = array(
		    'title' => t('ID'),
		    'help' => t('The record ID.'),
		    'field' => array(
		        'handler' => 'views_handler_field_numeric',
		    ),
		    'sort' => array(
		        'handler' => 'views_handler_sort',
		    ),
		    'filter' => array(
		        'handler' => 'views_handler_filter_numeric',
		    ),
		);

		// The Created
 		$data['nnels_stats']['created'] = array(
	    'title' => t('Created'),
	    'help' => t('The timestamp.'),
	    'field' => array(
	        'handler' => 'views_handler_field_date',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort_date',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_date',
	    ),
		); 
		
		$data['nnels_stats']['new_user'] = array(
		
	    'title' => t('New Registration'),
	    'help' => t('Is this a new user?'),
	    'field' => array(
	        'handler' => 'views_handler_field_boolean',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		$data['nnels_stats']['referring_url_type'] = array(
		
	    'title' => t('Referring URL Type'),
	    'field' => array(
	        'handler' => 'nnels_stats_views_handler_field_url_type',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		

		$data['nnels_stats']['authen_result'] = array(
		
	    'title' => t('Authentication Result'),
	    'field' => array(
	        'handler' => 'nnels_stats_views_handler_authentication_results', //views_handler_field_prerender_list??
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		$data['nnels_stats']['role'] = array(
		
	    'title' => t('User Role'),
	    'field' => array(
	        'handler' => 'views_handler_field_boolean',
	        'click sortable' => TRUE, // This is use by the table display plugin.
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		
		$data['nnels_stats']['login_page'] = array(
		
	    'title' => t('Login URL'),
	    'field' => array(
	        'handler' => 'views_handler_field',
	        'click sortable' => TRUE, // This is use by the table display plugin.
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_string',
	    ),
		
		);		

		$data['nnels_stats']['login_page'] = array(
		
	    'title' => t('Login URL'),
	    'field' => array(
	        'handler' => 'views_handler_field',
	        'click sortable' => TRUE, // This is use by the table display plugin.
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_string',
	    ),
		
		);		
				
		
		$data['nnels_stats']['session_id'] = array(
		
	    'title' => t('Session ID'),
	    'field' => array(
	        'handler' => 'views_handler_field',
	        'click sortable' => TRUE, // This is use by the table display plugin.
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_string',
	    ),
		
		);
				
		$data['nnels_stats']['orgid'] = array(
		    'title' => t('Org ID'),
		    'help' => t('The Org NID.'),
		    'field' => array(
		        'handler' => 'views_handler_field_node',
		    ),
		    'sort' => array(
		        'handler' => 'views_handler_sort',
		    ),
		    'filter' => array(
		        'handler' => 'views_handler_filter_numeric',
		    ),
		    'relationship' => array(
		        'base' => 'node',
		        'field' => 'orgid',
		        'handler' => 'views_handler_relationship',
		        'label' => t('Org Node'),
		    ),
		    'argument' => array(
		        'handler' => 'views_handler_argument_node_nid',
		        'numeric' => TRUE,
		        'validate type' => 'nid',
		    ),
		); 
    return $data;
 
}