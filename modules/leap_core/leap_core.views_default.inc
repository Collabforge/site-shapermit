<?php
/**
 * @file
 * fial_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fial_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_users';
  $view->description = 'Shows a grid of users such as kickstarters, team members etc.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'All Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = ' span3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'inline';
  $handler->display->display_options['style_options']['wrapper_class'] = 'row-fluid custom-grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no users available';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['text'] = '[field_first_name]
[field_last_name]';
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="http://innovationnetwork.org.au/sites/alphaiin/files/avatar-blank.jpg" style="height:32px;width:32px;" />';
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_business_position']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['alter']['text'] = '@ [field_organisation_ref] ';
  $handler->display->display_options['fields']['field_organisation_ref']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_organisation_ref']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisation_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[picture]
<h6>[field_first_name]</h6>
<p class="p2">[field_business_position]<br/><span style=color: #000000;">[field_organisation_ref]</span></p>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['all_users'] = $view;

  $view = new view();
  $view->name = 'homepage_news_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage News Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More >>';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="newsheader_1">
<div id="rightcol_1">
  <h2>News</h2>
  <div class="news">
    <h3>[title]</h3>
  <div id="newstext_1">
    <i>[created]</i><br/>
    [body]<br>
 [view_node]
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );

  /* Display: Block: Homepage News */
  $handler = $view->new_display('block', 'Block: Homepage News', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: Content: News type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['value'] = array(
    'News' => 'News',
  );

  /* Display: Attachment Blog */
  $handler = $view->new_display('attachment', 'Attachment Blog', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More >>';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="newsheader_2">
<div id="rightcol_2">
  <h2>Blog</h2>
  <div class="news">
    <h3>[title]</h3>
  <div id="newstext_2">
    <i>[created]</i><br/>
    [body]<br>
[view_node]
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: Content: News type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['value'] = array(
    'Blog' => 'Blog',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attachment Media */
  $handler = $view->new_display('attachment', 'Attachment Media', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More >>';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="newsheader_3">
<div id="rightcol_3">
  <h2>Media</h2>
  <div class="news">
    <h3>[title]</h3>
  <div id="newstext_3">
    <i>[created]</i><br/>
    [body]<br>
[view_node]
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: Content: News type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['value'] = array(
    'Media' => 'Media',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['homepage_news_blocks'] = $view;

  $view = new view();
  $view->name = 'homepage_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slide_link' => 0,
    'field_slide_image' => 0,
    'field_slide_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '2';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_slide_link' => 0,
    'field_slide_image' => 0,
    'field_slide_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_skin'] = 'black_icons';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="front-text">We are an industry-led, government funded initiative to accelerate commercially-driven collaboration and innovation in the Australian food industry.</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'innovation_at_work' => 0,
    'homepage_slider' => 0,
  );
  /* Field: Content: Slide link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['text'] = '[field_slide_image]';
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['type'] = 'link_plain';
  /* Field: Content: Slide image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Slide caption */
  $handler->display->display_options['fields']['field_slide_caption']['id'] = 'field_slide_caption';
  $handler->display->display_options['fields']['field_slide_caption']['table'] = 'field_data_field_slide_caption';
  $handler->display->display_options['fields']['field_slide_caption']['field'] = 'field_slide_caption';
  $handler->display->display_options['fields']['field_slide_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slide_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['text'] = '<a href="[field_slide_link]" class="homepage-slider-link">[field_slide_caption]</a>';
  $handler->display->display_options['fields']['field_slide_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage_slide' => 'homepage_slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Homepage Slider';
  $export['homepage_slider'] = $view;

  $view = new view();
  $view->name = 'news_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News_update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'topic_feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'unstyled';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'name_1' => 'name_1',
    'body' => 'body',
    'picture_1' => 'picture_1',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Current conversations</h2>
<p>Click to join one of our current conversations:</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'conversation_titles:block';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<p>Or scroll down for a preview.</p>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'join_the_conversation_queue' => 'join_the_conversation_queue',
    'innovation_at_work' => 0,
    'slideshow' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '1500',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y @ h:i a';
  $handler->display->display_options['fields']['created']['timezone'] = 'Australia/Melbourne';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_type'] = 'strong';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position_1']['id'] = 'field_business_position_1';
  $handler->display->display_options['fields']['field_business_position_1']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position_1']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position_1']['label'] = '';
  $handler->display->display_options['fields']['field_business_position_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref_1']['id'] = 'field_organisation_ref_1';
  $handler->display->display_options['fields']['field_organisation_ref_1']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref_1']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref_1']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref_1']['element_label_colon'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture_1']['id'] = 'picture_1';
  $handler->display->display_options['fields']['picture_1']['table'] = 'users';
  $handler->display->display_options['fields']['picture_1']['field'] = 'picture';
  $handler->display->display_options['fields']['picture_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['fields']['picture_1']['label'] = '';
  $handler->display->display_options['fields']['picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['image_style'] = 'user_thumb_small';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="row-fluid conversationcomment span12">
    <div class="span11">
      <p class"p2"><strong>Recent comment: <em>[last_comment_timestamp]</em></strong></p>
    </div>
    <div class="span2">
      [picture_1]
    </div>
    <div class="span9 commentname" >
      <span class="p">[name]</span>
    </div>
    <div class="p span8">[field_business_position] [field_organisation]</div>
    <div class="span7 commentquote" >
      <span class="p">[comment_body]</span>
    </div>
  </div>';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body_1']['id'] = 'comment_body_1';
  $handler->display->display_options['fields']['comment_body_1']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body_1']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body_1']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['comment_body_1']['label'] = '';
  $handler->display->display_options['fields']['comment_body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body_1']['alter']['text'] = '<div class="row-fluid conversationcomment span12">
  <div><p><b>Recent comment:</b></p></div>
    <div class="span2 comment-img">
      [picture_1]
    </div>
    <div class="span9 commentname" >
      <span class="excerpt-author">
      [name],</span>
      <br/>[field_business_position] @ [field_organisation_ref]<br/>
      commented [last_comment_timestamp]</span>
    </div>
    <div class="commentquote span11" >
      [comment_body]
    </div>
  </div>';
  $handler->display->display_options['fields']['comment_body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Have your say';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '  <div class="row-fluid conversationpreview conversation-item">
  <h3>[title]</h3>
  <div class="hostedby"><p>A conversation hosted by:</p></div>
  <div class="span2">[picture]</div>
  <div class="p span9">
     <div>[name_1] </div>
     <div>[field_business_position_1] @ [field_organisation_ref_1]</div>   
  </div>
  <div class="span12 conversation-excerpt">[body]<br>
  [comment_body_1]
  <span class="haveyoursay">[title_1]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
    'conversation' => 'conversation',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';

  /* Display: Closed Group Block */
  $handler = $view->new_display('block', 'Closed Group Block', 'closed_group_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group conversations';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'view body field';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Click to join one of the current conversations in this group:</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'conversation_titles:group_block';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<p>Or scroll down for a preview.</p>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['gid']['validate_options']['types'] = array(
    'closed_group' => 'closed_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );

  /* Display: News Update */
  $handler = $view->new_display('page', 'News Update', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'topic_feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'unstyled recent_topicslist';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'name_1' => 'name_1',
    'body' => 'body',
    'picture_1' => 'picture_1',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_event']['id'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['table'] = 'field_data_field_image_event';
  $handler->display->display_options['fields']['field_image_event']['field'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_event']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref']['id'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['label'] = '';
  $handler->display->display_options['fields']['field_file_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref_1']['id'] = 'field_file_ref_1';
  $handler->display->display_options['fields']['field_file_ref_1']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="announce_block">
	<div class="article-header">
		<h3 class="page-title">[title]</h3>
		<div> <p class="byline vcard">Posted [created].</p>
		</div>
	</div>
	<div class="span2 first announce_img" style="display:inline; text-align:left; vertical-align:top;">
          [picture]</div>
	<div class="span9 announce_article" style="display:inline; text-align:left; vertical-align:top;">
		<p>[body]<br/>[field_file_ref_1]</p>
	</div>
	<div class="article-footer">
		<p class="clearfix"></p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'news-update';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Latest Update */
  $handler = $view->new_display('block', 'Latest Update', 'recommended_metaupdate');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: Flags: hide_content */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'hide_content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '1500',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y @ h:i a';
  $handler->display->display_options['fields']['created']['timezone'] = 'Australia/Melbourne';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_type'] = 'strong';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position_1']['id'] = 'field_business_position_1';
  $handler->display->display_options['fields']['field_business_position_1']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position_1']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position_1']['label'] = '';
  $handler->display->display_options['fields']['field_business_position_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref_1']['id'] = 'field_organisation_ref_1';
  $handler->display->display_options['fields']['field_organisation_ref_1']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref_1']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref_1']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref_1']['element_label_colon'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture_1']['id'] = 'picture_1';
  $handler->display->display_options['fields']['picture_1']['table'] = 'users';
  $handler->display->display_options['fields']['picture_1']['field'] = 'picture';
  $handler->display->display_options['fields']['picture_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['fields']['picture_1']['label'] = '';
  $handler->display->display_options['fields']['picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['image_style'] = 'user_thumb_small';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="row-fluid conversationcomment span12">
    <div class="span11">
      <p class"p2"><strong>Recent comment: <em>[last_comment_timestamp]</em></strong></p>
    </div>
    <div class="span2">
      [picture_1]
    </div>
    <div class="span9 commentname" >
      <span class="p">[name]</span>
    </div>
    <div class="p span8">[field_business_position] [field_organisation]</div>
    <div class="span7 commentquote" >
      <span class="p">[comment_body]</span>
    </div>
  </div>';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body_1']['id'] = 'comment_body_1';
  $handler->display->display_options['fields']['comment_body_1']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body_1']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body_1']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['comment_body_1']['label'] = '';
  $handler->display->display_options['fields']['comment_body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body_1']['alter']['text'] = '<div class="row-fluid conversationcomment span12">
  <div><p><b>Recent comment:</b></p></div>
    <div class="span2 comment-img">
      [picture_1]
    </div>
    <div class="span9 commentname" >
      <span class="excerpt-author">
      [name],</span>
      <br/>[field_business_position] @ [field_organisation_ref]<br/>
      commented [last_comment_timestamp]</span>
    </div>
    <div class="commentquote span11" >
      [comment_body]
    </div>
  </div>';
  $handler->display->display_options['fields']['comment_body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Have your say';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['empty'] = '<img width="100px" src="/sites/default/files/placeholder1.jpg"/>';
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'featured_article',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<a class="flag-hide-content" href="/flag/flag/hide_content/[nid]">Hide this <i class="icon-remove"></i></a>';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row-fluid">
  <div class="span10 first"><h3>[title]</h3><br></div>
   <div class="span2 last hide_flag">[ops]</div>
    <div class="row-fluid">
      <div class="span4">[field_featured_image]</div>
      <div class="span7 update_text">[body]<br><br>
          <div class="span2 user-picture-small">[picture]</div>
          <div class="span9">From<br>
                        [name_1] <br>
                        [field_business_position_1] @ [field_organisation_ref_1]   </div>
      </div>
    </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '<a href="/flag/flag/hide_content/[nid]">Hide this <i class=\'icon-remove\'></i></a>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '-14 days';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';

  /* Display: Recommended Topic for News page */
  $handler = $view->new_display('block', 'Recommended Topic for News page', 'recommended_news_of_news_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '1500',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y @ h:i a';
  $handler->display->display_options['fields']['created']['timezone'] = 'Australia/Melbourne';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_type'] = 'strong';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position_1']['id'] = 'field_business_position_1';
  $handler->display->display_options['fields']['field_business_position_1']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position_1']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position_1']['label'] = '';
  $handler->display->display_options['fields']['field_business_position_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref_1']['id'] = 'field_organisation_ref_1';
  $handler->display->display_options['fields']['field_organisation_ref_1']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref_1']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref_1']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref_1']['element_label_colon'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture_1']['id'] = 'picture_1';
  $handler->display->display_options['fields']['picture_1']['table'] = 'users';
  $handler->display->display_options['fields']['picture_1']['field'] = 'picture';
  $handler->display->display_options['fields']['picture_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['fields']['picture_1']['label'] = '';
  $handler->display->display_options['fields']['picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['image_style'] = 'user_thumb_small';
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Profile: Organisation */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="row-fluid conversationcomment span12">
    <div class="span11">
      <p class"p2"><strong>Recent comment: <em>[last_comment_timestamp]</em></strong></p>
    </div>
    <div class="span2">
      [picture_1]
    </div>
    <div class="span9 commentname" >
      <span class="p">[name]</span>
    </div>
    <div class="p span8">[field_business_position] [field_organisation]</div>
    <div class="span7 commentquote" >
      <span class="p">[comment_body]</span>
    </div>
  </div>';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body_1']['id'] = 'comment_body_1';
  $handler->display->display_options['fields']['comment_body_1']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body_1']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body_1']['relationship'] = 'cid_1';
  $handler->display->display_options['fields']['comment_body_1']['label'] = '';
  $handler->display->display_options['fields']['comment_body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body_1']['alter']['text'] = '<div class="row-fluid conversationcomment span12">
  <div><p><b>Recent comment:</b></p></div>
    <div class="span2 comment-img">
      [picture_1]
    </div>
    <div class="span9 commentname" >
      <span class="excerpt-author">
      [name],</span>
      <br/>[field_business_position] @ [field_organisation_ref]<br/>
      commented [last_comment_timestamp]</span>
    </div>
    <div class="commentquote span11" >
      [comment_body]
    </div>
  </div>';
  $handler->display->display_options['fields']['comment_body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Have your say';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['empty'] = '<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/placeholder.jpg"></div>';
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'featured_article',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="recommended row-fluid">
  <div class="topic_feature_left span5">

    <div class="topic_feature_title">Latest</div>
    <div class="topic_feature_image">[field_featured_image]</div>

  </div>
  <div class="topic_feature_right span7">

    <h3>[title]</h3>
    <div class="topic_feature_body">[body]</div>

      
      
    <table class="user_block">
      <tr>
        <td>

      <div class="topic_host_left">
        <div class="user-picture-small">[picture]</div>
      </div>

        </td>
        <td>

      <div class="topic_host_right">
        <p>
          Hosted by <span class="article_host_name"><a href="#">[name_1]</a></span><br />
          [field_business_position_1] &#64; [field_organisation_ref_1]
        </p>

      </div>
    
      </td>
    </tr>
  </table>

  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  $handler->display->display_options['block_description'] = 'Recommended News for News Page';

  /* Display: Quicktab News */
  $handler = $view->new_display('page', 'Quicktab News', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'topic_feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'unstyled recent_topicslist';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'name_1' => 'name_1',
    'body' => 'body',
    'picture_1' => 'picture_1',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_event']['id'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['table'] = 'field_data_field_image_event';
  $handler->display->display_options['fields']['field_image_event']['field'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_event']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref']['id'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['label'] = '';
  $handler->display->display_options['fields']['field_file_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref_1']['id'] = 'field_file_ref_1';
  $handler->display->display_options['fields']['field_file_ref_1']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="announce_block">
	<div class="article-header">
		<h3 class="page-title">[title]</h3>
		<div> <p class="byline vcard">Posted [created].</p>
		</div>
	</div>
	<div class="span2 first announce_img" style="display:inline; text-align:left; vertical-align:top;">
          [picture]</div>
	<div class="span9 announce_article" style="display:inline; text-align:left; vertical-align:top;">
		<p>[body]<br/>[field_file_ref_1]</p>
	</div>
	<div class="article-footer">
		<p class="clearfix"></p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  /* Filter criterion: Content: News type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['value'] = array(
    'News' => 'News',
  );
  $handler->display->display_options['path'] = 'news-update/news';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Quicktab Blog */
  $handler = $view->new_display('page', 'Quicktab Blog', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'topic_feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'unstyled recent_topicslist';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'name_1' => 'name_1',
    'body' => 'body',
    'picture_1' => 'picture_1',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_event']['id'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['table'] = 'field_data_field_image_event';
  $handler->display->display_options['fields']['field_image_event']['field'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_event']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref']['id'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['label'] = '';
  $handler->display->display_options['fields']['field_file_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref_1']['id'] = 'field_file_ref_1';
  $handler->display->display_options['fields']['field_file_ref_1']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="announce_block">
	<div class="article-header">
		<h3 class="page-title">[title]</h3>
		<div> <p class="byline vcard">Posted [created].</p>
		</div>
	</div>
	<div class="span2 first announce_img" style="display:inline; text-align:left; vertical-align:top;">
          [picture]</div>
	<div class="span9 announce_article" style="display:inline; text-align:left; vertical-align:top;">
		<p>[body]<br/>[field_file_ref_1]</p>
	</div>
	<div class="article-footer">
		<p class="clearfix"></p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  /* Filter criterion: Content: News type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['value'] = array(
    'Blog' => 'Blog',
  );
  $handler->display->display_options['path'] = 'news-update/blog';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Quicktab Media */
  $handler = $view->new_display('page', 'Quicktab Media', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'topic_feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'unstyled recent_topicslist';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'name_1' => 'name_1',
    'body' => 'body',
    'picture_1' => 'picture_1',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_event']['id'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['table'] = 'field_data_field_image_event';
  $handler->display->display_options['fields']['field_image_event']['field'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_event']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref']['id'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['label'] = '';
  $handler->display->display_options['fields']['field_file_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref_1']['id'] = 'field_file_ref_1';
  $handler->display->display_options['fields']['field_file_ref_1']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="announce_block">
	<div class="article-header">
		<h3 class="page-title">[title]</h3>
		<div> <p class="byline vcard">Posted [created].</p>
		</div>
	</div>
	<div class="span2 first announce_img" style="display:inline; text-align:left; vertical-align:top;">
          [picture]</div>
	<div class="span9 announce_article" style="display:inline; text-align:left; vertical-align:top;">
		<p>[body]<br/>[field_file_ref_1]</p>
	</div>
	<div class="article-footer">
		<p class="clearfix"></p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  /* Filter criterion: Content: News type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_value']['value'] = array(
    'Blog' => 'Blog',
  );
  $handler->display->display_options['path'] = 'news-update/media';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Quicktab All */
  $handler = $view->new_display('page', 'Quicktab All', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'topic_feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'unstyled recent_topicslist';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'name_1' => 'name_1',
    'body' => 'body',
    'picture_1' => 'picture_1',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Last comment author */
  $handler->display->display_options['relationships']['last_comment_uid']['id'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['last_comment_uid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['last_comment_uid']['field'] = 'last_comment_uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'innovation_capabilities' => 'innovation_capabilities',
    'areas_of_participant_expertise' => 0,
    'organization_type' => 0,
    'precinct' => 0,
  );
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['relationships']['cid_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid_1']['field'] = 'cid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'last_comment_uid';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Comment Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Host';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_event']['id'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['table'] = 'field_data_field_image_event';
  $handler->display->display_options['fields']['field_image_event']['field'] = 'field_image_event';
  $handler->display->display_options['fields']['field_image_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_event']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref']['id'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['label'] = '';
  $handler->display->display_options['fields']['field_file_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Field: Attachment */
  $handler->display->display_options['fields']['field_file_ref_1']['id'] = 'field_file_ref_1';
  $handler->display->display_options['fields']['field_file_ref_1']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_ref_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="announce_block">
	<div class="article-header">
		<h3 class="page-title">[title]</h3>
		<div> <p class="byline vcard">Posted [created].</p>
		</div>
	</div>
	<div class="span2 first announce_img" style="display:inline; text-align:left; vertical-align:top;">
          [picture]</div>
	<div class="span9 announce_article" style="display:inline; text-align:left; vertical-align:top;">
		<p>[body]<br/>[field_file_ref_1]</p>
	</div>
	<div class="article-footer">
		<p class="clearfix"></p>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_update' => 'news_update',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['operator'] = 'empty';
  $handler->display->display_options['filters']['gid']['group'] = 1;
  $handler->display->display_options['path'] = 'news-update/all';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['news_update'] = $view;

  return $export;
}
