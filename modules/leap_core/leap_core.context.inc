<?php
/**
 * @file
 * leap_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function leap_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-about';
  $context->description = '';
  $context->tag = 'fial::layout';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/261' => 'node/261',
        'node/262' => 'node/262',
        'node/263' => 'node/263',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'leap_core-about_menu' => array(
          'module' => 'leap_core',
          'delta' => 'about_menu',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fial::layout');
  $export['layout-about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-login_pages';
  $context->description = '';
  $context->tag = 'fial::layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/register' => 'user/register',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'connector-one_click_block' => array(
          'module' => 'connector',
          'delta' => 'one_click_block',
          'region' => 'content_upper',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('fial::layout');
  $export['layout-login_pages'] = $context;

  return $export;
}
