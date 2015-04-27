<?php
/**
 * @file
 * List field predefined options module integration.
 */

/**
 * Implements hook_list_option_info().
 */
function leap_core_list_option_info() {
  $info['join_nature'] = array(
    'label' => t('Join nature list'),
    'callback' => 'leap_core_list_join_nature',
  );

  return $info;
}

/**
 * Callback for 'Join nature list' options list.
 */
function leap_core_list_join_nature() {
  return array(
    '111 Meat and Meat Product Manufacturing' => array(
      '1111 Meat Processing' => '1111 Meat Processing',
      '1112 Poultry Processing' => '1112 Poultry Processing',
      '1113 Cured Meat and Smallgoods Manufacturing' => '1113 Cured Meat and Smallgoods Manufacturing',
    ),
    '112 Seafood Processing' => array(
      '1120 Seafood Processing' => '1120 Seafood Processing',
    ),
    '113 Dairy Product Manufacturing' => array(
      '1131 Milk and Cream Processing' => '1131 Milk and Cream Processing',
      '1132 Ice Cream Manufacturing' => '1132 Ice Cream Manufacturing',
      '1133 Cheese and Other Dairy Product Manufacturing' => '1133 Cheese and Other Dairy Product Manufacturing',
    ),
    '114 Fruit and Vegetable Processing' => array(
      '1140 Fruit and Vegetable Processing' => '1140 Fruit and Vegetable Processing',
    ),
    '115 Oil and Fat Manufacturing' => array(
      '1150 Oil and Fat Manufacturing' => '1150 Oil and Fat Manufacturing',
    ),
    '116 Grain Mill and Cereal Product Manufacturing' => array(
      '1161 Grain Mill Product Manufacturing' => '1161 Grain Mill Product Manufacturing',
      '1162 Cereal, Pasta and Baking Mix Manufacturing' => '1162 Cereal, Pasta and Baking Mix Manufacturing',
    ),
    '117 Bakery Product Manufacturing' => array(
      '1171 Bread Manufacturing (Factory based)' => '1171 Bread Manufacturing (Factory based)',
      '1172 Cake and Pastry Manufacturing (Factory based)' => '1172 Cake and Pastry Manufacturing (Factory based)',
      '1173 Biscuit Manufacturing (Factory based)' => '1173 Biscuit Manufacturing (Factory based)',
      '1174 Bakery Product Manufacturing (Non-factory based)' => '1174 Bakery Product Manufacturing (Non-factory based)',
    ),
    '118 Sugar and Confectionery Manufacturing' => array(
      '1181 Sugar Manufacturing' => '1181 Sugar Manufacturing',
      '1182 Confectionery Manufacturing' => '1182 Confectionery Manufacturing',
    ),
    '119 Other Food Product Manufacturing' => array(
      '1191 Potato, Corn and Other Crisp Manufacturing' => '1191 Potato, Corn and Other Crisp Manufacturing',
      '1192 Prepared Animal and Bird Feed Manufacturing' => '1192 Prepared Animal and Bird Feed Manufacturing',
      '1199 Other Food Product Manufacturing n.e.c.' => '1199 Other Food Product Manufacturing n.e.c.',
    ),
    '121 Beverage Manufacturing' => array(
      '1211 Soft Drink, Cordial and Syrup Manufacturing' => '1211 Soft Drink, Cordial and Syrup Manufacturing',
      '1212 Beer Manufacturing' => '1212 Beer Manufacturing',
      '1213 Spirit Manufacturing' => '1213 Spirit Manufacturing',
      '1214 Wine Manufacturing' => '1214 Wine Manufacturing',
    ),
    'Other' => array(
      '7810 Scientific research' => '7810 Scientific research',
      '7853 Market research services' => '7853 Market research services',
      '7854 Business administrative services' => '7854 Business administrative services',
      '7855 Business management services' => '7855 Business management services',
      '8431 Higher education' => '8431 Higher education',
      '8432 Technical and further education' => '8432 Technical and further education',
      '844 Other education' => '844 Other education',
      'Other (please complete field below)' => 'Other (please complete field below)',
    ),
  );
}
