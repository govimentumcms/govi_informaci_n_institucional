<?php
/**
 * @file
 * govi_informaci_n_institucional.features.inc
 */

/**
 * Implements hook_views_api().
 */
function govi_informaci_n_institucional_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_informaci_n_institucional_node_info() {
  $items = array(
    'informacion_institucional' => array(
      'name' => t('información institucional'),
      'base' => 'node_content',
      'description' => t(' información institucional de la Entidad como son: directorio de funcionarios, información institucional, normatividad y presupuesto.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
