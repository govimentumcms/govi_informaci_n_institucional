<?php
/**
 * @file
 * govi_informaci_n_institucional.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_informaci_n_institucional_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-organizacion_directorio:directorio-funcionarios.
  $menu_links['menu-menu-organizacion_directorio:directorio-funcionarios'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'directorio-funcionarios',
    'router_path' => 'directorio-funcionarios',
    'link_title' => 'Directorio',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_directorio:directorio-funcionarios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_misin:menutoken/5670a22b9c1d4.
  $menu_links['menu-menu-organizacion_misin:menutoken/5670a22b9c1d4'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'menutoken/5670a22b9c1d4',
    'router_path' => 'menutoken/%',
    'link_title' => 'Misión',
    'options' => array(
      'identifier' => 'menu-menu-organizacion_misin:menutoken/5670a22b9c1d4',
      'menu_token_link_path' => '[site:url]organizacion/#node-8',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5670a201e6aa3',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_organigrama:<front>.
  $menu_links['menu-menu-organizacion_organigrama:<front>'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Organigrama',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_organigrama:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_visin:menutoken/5670a2132fc92.
  $menu_links['menu-menu-organizacion_visin:menutoken/5670a2132fc92'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'menutoken/5670a2132fc92',
    'router_path' => 'menutoken/%',
    'link_title' => 'Visión',
    'options' => array(
      'identifier' => 'menu-menu-organizacion_visin:menutoken/5670a2132fc92',
      'menu_token_link_path' => '[site:url]organizacion/#node-9',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5670a057a5131',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Directorio');
  t('Misión');
  t('Organigrama');
  t('Visión');

  return $menu_links;
}
