<?php

function flip_theme_preprocess_page(&$vars) {
  $vars['mobile']['block_search'] = _meta_structure_block_view('search', 'form');
  $menu_profile = _meta_structure_block_view('menu', 'menu-profile-menu');
  $menu_secondary = _meta_structure_block_view('menu', 'menu-meta-secondary-menu');
  $menu_primary = _meta_structure_block_view('menu', user_is_logged_in() ? 'menu-main-menu---auth' : 'main-menu-menu-anon');
  $vars['mobile']['block_menu'] = $menu_secondary;
  $vars['mobile']['block_profile'] = $menu_profile;
}

function flip_theme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#title_display'] = 'invisible';
    $form['search_block_form']['#attributes']['class'][] = 'input-medium search-query';
    $form['search_block_form']['#attributes']['placeholder'] = t('Search this site...');
    $form['actions']['submit']['#attributes']['class'][] = 'btn-search';
    $form['actions']['submit']['#attributes']['alt'] = 'Click to search';  
    $form['actions']['submit']['#type'] = 'image_button';
    $form['actions']['submit']['#src'] = drupal_get_path('theme', 'open_framework') . '/images/searchbutton.png';
  }
}