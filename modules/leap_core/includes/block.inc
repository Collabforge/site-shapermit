<?php
/**
 * @file
 * Block module integration.
 */

/**
 * Implements hook_block_info().
 */
function leap_core_block_info() {
  $block['about_menu'] = array(
    'info' => t('About menu'),
    'cache' => DRUPAL_CACHE_GLOBAL,
  );

  return $block;
}

/**
 * Implements hook_block_view().
 */
function leap_core_block_view($delta) {
  $block = array();

  if ('about_menu' == $delta) {
    $tree = menu_tree_all_data('menu-meta-secondary-menu');
    foreach (array_keys($tree) as $limb) {
      if (!strstr($limb, 'About')) {
        unset($tree[$limb]);
      }
    }

    $links[] = array(
      'title' => $tree[key($tree)]['link']['link_title'],
      'href' => $tree[key($tree)]['link']['link_path'],
    );
    foreach ($tree[key($tree)]['below'] as $child) {
      $links[] = array(
        'title' => $child['link']['link_title'],
        'href' => $child['link']['link_path'],
      );
    }
    $block['content'] = theme('links', array('links' => $links));
  }

  return $block;
}
