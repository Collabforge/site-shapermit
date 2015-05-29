<?php

function flip_theme_preprocess_page(&$vars) {
  $vars['mobile']['block_search'] = _meta_structure_block_view('search', 'form');
  $menu_profile = _meta_structure_block_view('menu', 'menu-profile-menu');
  $menu_secondary = _meta_structure_block_view('menu', 'menu-meta-secondary-menu');
  $menu_primary = _meta_structure_block_view('menu', user_is_logged_in() ? 'menu-main-menu---auth' : 'main-menu-menu-anon');
  $vars['mobile']['block_menu'] = $menu_secondary;
  $vars['mobile']['block_profile'] = $menu_profile;
}
