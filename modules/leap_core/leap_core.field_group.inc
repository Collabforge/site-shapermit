<?php
/**
 * @file
 * fial_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fial_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_join_challenges|entityform|join|form';
  $field_group->group_name = 'group_join_challenges';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'join';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_join';
  $field_group->data = array(
    'label' => 'Key Challenges',
    'weight' => '8',
    'children' => array(
      0 => 'field_join_key_challenge_1',
      1 => 'field_join_key_challenge_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Key Challenges',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-join-challenges field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_join_challenges|entityform|join|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_join|entityform|join|form';
  $field_group->group_name = 'group_join';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'join';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Register your expression of interest to participate',
    'weight' => '0',
    'children' => array(
      0 => 'field_join_address',
      1 => 'field_join_contact',
      2 => 'field_join_email',
      3 => 'field_join_phone',
      4 => 'field_join_nature',
      5 => 'field_join_nature_other',
      6 => 'field_join_size',
      7 => 'field_join_type',
      8 => 'field_capabilities',
      9 => 'group_join_challenges',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Register your expression of interest to participate',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-join field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_join|entityform|join|form'] = $field_group;

  return $export;
}
