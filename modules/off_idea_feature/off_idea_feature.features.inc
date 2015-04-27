<?php
/**
 * @file
 * off_idea_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function off_idea_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function off_idea_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function off_idea_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Vote".
  $flags['idea_vote'] = array(
    'entity_type' => 'node',
    'title' => 'Vote',
    'global' => 0,
    'types' => array(
      0 => 'idea',
    ),
    'flag_short' => 'Vote for this  ([node:flag-idea-vote-count] votes)',
    'flag_long' => '',
    'flag_message' => 'You have placed a vote for [node:title]',
    'unflag_short' => 'Remove vote ([node:flag-idea-vote-count] votes)',
    'unflag_long' => '',
    'unflag_message' => 'You have removed your vote for [node:title]',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'off_idea_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function off_idea_feature_node_info() {
  $items = array(
    'idea' => array(
      'name' => t('Idea'),
      'base' => 'node_content',
      'description' => t('Allows users to post and Idea for a new feature or changes to a current one.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
